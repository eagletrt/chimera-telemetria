#ifndef MANETTINI_H
#define MANETTINI_H


class Manettini
{
public:
    Manettini();
    void setMap(int);
    void setTc(int);
    void setPump(int);
    int getMap() const;
    int getTc() const;
    int getPump() const;
    void incMap(const int);
    void incPump(const int);
    void incTc(const int);
private:
    int map;
    int tc;
    int pump;
};

#endif // MANETTINI_H
