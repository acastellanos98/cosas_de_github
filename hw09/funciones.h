//Runge Kutta

#include <math.h> 
#include <iostream>
#include <iomanip>
using namespace std;

static double dy_dt(double t, double y){
    return -20 - 9.8 * t;
}

double rungeKutta4(){
    double t = 0; //s
    double t_end = 0.388; //s

    double y = 8.5; //m 
    double h = 0.001;

    cout << setprecision(16);

    int n = static_cast<int>((t_end - t) / h);

    cout << "t, y" << endl;
    cout << t << ", " << y << endl;

    for (int i = 0; i < n; i++){
        double k1 = dy_dt(t, y);
        double k2 = dy_dt(t + h / 2.0, y + h*k1 / 2.0);
        double k3 = dy_dt(t + h / 2.0, y + h*k2 / 2.0);
        double k4 = dy_dt(t + h, y + h*k3);

        y += (k1 + 2 * k2 + 2 * k3 + k4) * h / 6.0;

        cout << t << ", " << y << endl;

        t += h;
    }
    return 0;
}