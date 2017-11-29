#ifndef CARSTATUS_H 
#define CARSTATUS_H

#define CAR_STATUS_IDLE 0
#define CAR_STATUS_GO   1
#define CAR_STATUS_STOP 2

#include <QDebug>

class CarStatus : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString CANStatus READ CANStatus NOTIFY CANStatusChanged)
    Q_PROPERTY(QString HVStatus READ HVStatus NOTIFY HVStatusChanged)
    Q_PROPERTY(QString ERRStatus READ ERRStatus NOTIFY ERRStatusChanged)
    Q_PROPERTY(QString CTRLEnabled READ CTRLEnabled NOTIFY CTRLEnabledChanged)
    Q_PROPERTY(QList<int> APPSStatus READ APPSStatus NOTIFY APPSStatusChanged)
    Q_PROPERTY(QList<int> BSEStatus READ BSEStatus NOTIFY BSEStatusChanged)
    Q_PROPERTY(QList<int> STEERStatus READ STEERStatus NOTIFY STEERStatusChanged)
    Q_PROPERTY(int velocity READ velocity NOTIFY velocityChanged)
    Q_PROPERTY(int preset READ preset NOTIFY presetChanged)

    public:
        CarStatus();
        ~CarStatus();

        QString CANStatus() const;
        QString HVStatus() const;
        QString ERRStatus() const;
        QList<int> APPSStatus() const;
        QList<int> BSEStatus() const;
        QList<int> STEERStatus() const;
        QString CTRLEnabled() const;

        int velocity() const;
        int preset() const;

        void setHVStatus(int invRight, int invLeft, int preCharge);
        void setCarStatus(int, int, int, int, int, int);
        void setCANStatus(int, int, int, int, int, int);
        void setERRStatus(int, int, int, int, int, int, int, int);
        void setAPPSBSEStatus(int, int, int, int);
        void setSTEERStatus(int, int);

        int getCtrlIsEnabled();
        int getCtrlIsOn();
        int getCurrentStatus();

        void setTemperature(int temperature);
        void setStateOfCharge(int stateofcharge);

    public slots:
        int toggleCtrl();
        int toggleCarStatus();
        int stopCar();
        void changePreset(int presetID);

    private:
        static int getBit(unsigned char seq, int index);
        int m_invRight;
        int m_invLeft;
        int m_preCharge;

        int m_ctrlIsEnabled;
        int m_ctrlIsOn;
        int m_car_status;

        int m_warning;
        int m_error;
        
        int m_stateofcharge;
        int m_temperature;
        int m_velocity;
        int m_preset;

        int m_invr;
        int m_invl;
        int m_front;
        int m_rear;
        int m_lv;
        int m_hv;

        int m_err_apps;
        int m_err_bse;
        int m_err_steer;
        int m_err_wheel_right;
        int m_err_wheel_left;
        int m_err_imu_front;
        int m_err_imu_central;
        int m_err_imu_rear;

        int m_apps;
        int m_num_err_apps;
        int m_bse;
        int m_num_err_bse;
        int m_steer;
        int m_num_err_steer;

    signals:
        void tempChanged(int temperature);
        void socChanged(int soc);
        void execModeChanged(int ctrlIsEnabled, int ctrlIsOn, int warning, int error);
        void carStatusChanged(int statusID); 

        void toggleCar();

        void HVStatusChanged();
        void CANStatusChanged();
        void ERRStatusChanged();
        void APPSStatusChanged();
        void BSEStatusChanged();
        void STEERStatusChanged();
        void CTRLEnabledChanged(); 
        void velocityChanged();
        void presetChanged();
};

#endif // CARSTATUS_H


