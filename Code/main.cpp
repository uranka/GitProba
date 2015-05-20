//Data je klasa Tacka. Kreirani obj. moze da bude samo tacka sa koordinatama
// iz I kvadranta.
//Obezbediti pomeranje tacke za zadate pomeraje,
//ali tako da ostane u I kv. i unutar zadatih granica.
//Kraj 0 za pomeraj obe koordinate.

#include <iostream>

using namespace std;

class gr{};

class Tacka
{
   float x, y, maxx, maxy;
public:
    Tacka (float a, float b, float maxa, float maxb){
        x=a; y=b; maxx=maxa; maxy=maxb;}

    void pomeri(float dx, float dy){
        x+=dx;
        y+=dy;
        if(x<0 || x>maxx)
            throw gr();
        if(y<0 || y>maxy)
            throw gr();
    }

    float koord_x()
    {
        return x;
    }
    float koord_y()
    {
        return y;
    }
};

int main()
{
    float x, y, maxx, maxy, dx, dy;
    cout<<"Izmena zbog eksperimenta sa git-om i njegovim ignore fajlom"<<endl;

    cout<<"zadati granice "<<endl;
    cout<<"maxx="; cin>>maxx;
    cout<<"maxy"; cin>>maxy;
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
   // if(x<0 || x>maxx) throw gr();
   // if(y<0 || y>maxy) throw gr();

    Tacka T(x,y, maxx, maxy);

    while(true)
    {
        try
        {
            cout<<"dx="; cin>>dx;
            cout<<"dy="; cin>>dy;
            if (dx==0 && dy==0) break;
            T.pomeri(dx, dy);
            cout<<"x="<<T.koord_x()<<" y="<<T.koord_y()<<endl;
        }
        catch(gr)
        {
            cout<<"prekoracenje opsega!"<<endl;
        }
    }

    cout<<" KRAJNJE KOORD:("<< T.koord_x()<<", "<<T.koord_y()<<")"<<endl;

    return 0;
}
