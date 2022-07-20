#include <iostream>
# include <math.h>
#define PI 3.1415926536
using namespace std;

int main(){
    float a, b, c, d;
    float q, r, u, v, x1, x2, x3, dis, x4, rad, ang;
    cout<<"\n\tintrodusca el valoror de a = ";
    cin>>a;
    cout<<"\tintrodusca el valoror de b = ";
    cin>>b;
    cout<<"\tintrodusca el valoror de c = ";
    cin>>c;
    cout<<"\tintrodusca el valoror de d = ";
    cin>>d;
    q=(3*a*c-pow(b,2))/(3*pow(a,2));
    r=(2*pow(b,3)-9*a*b*c+27*pow(a,2)*d)/(27*pow(a,3));
    dis=(pow(r,2)/4)+(pow(q,3)/27);


    if(a!=0)
    {

        if(dis>0)
        {
            u=cbrt((-r/2)+sqrt(dis));
            v=cbrt((-r/2)-sqrt(dis));
            x1=u+v-(b/(3*a));
            x2=(-0.5)*(u+v)-(b/(3*a));
            x3=(sqrt(3)/2)*(u-v);
            x4=(sqrt(3)/2)*(v-u);
            cout<<"\n\tx1 = "<<x1;
            cout<<"\n\tx2 = "<<x2<<" "<<x3<<"i";
            cout<<"\n\tx3 = "<<x2<<" "<<x4<<"i";
        }
        else if(dis<0)
        {
            rad=sqrt(pow((-r/2),2)+dis);
            ang=atan((sqrt(dis))/(-r/2));
            x1= 2*cbrt(rad)*cos(ang/3);
            //x2= 2*cbrt(rad)*cos((ang/3)+120);
            //x3= 2*cbrt(rad)*cos((ang/3)+240);
            cout<<"\tx1 = "<<x1<<" ";
            //cout<<"\tx2 = "<<x2<<" ";
            //cout<<"\tx3 = "<<x3<<" ";
        } else{
            /*u=cbrt(-r/2);
            x1=2*u-(b/(3*a));
            x2=-u-(b/(3*a));
            cout<<"\n\tx1 = "<<x1;
            cout<<"\n\tx2 = "<<x2<<" ";
            cout<<"\ntx3 = "<<x2<<" ";*/
        }


    }else{
        cout<<"NO ES UNA ECUACION DE TERCER GRADO";
    }

    return 0;

}
