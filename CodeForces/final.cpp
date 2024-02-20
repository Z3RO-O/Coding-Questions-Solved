#include <iostream>
#include <cmath>

using namespace std;

double complexEqn(double x, double y, double z)
{
    return (pow((pow(x, 2) + pow(y, 4)), 1.0 / 3) / z + log10(pow(x, 3) * pow(y, 2)) * (pow(z, 2) - 2 * x * y) / sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
}

double complexEquation(double x, double y, double z) {

    try{
        int temp = 1+(x+y-z);
        throw(complexEqn(x,y,z));
    }
    catch(double tex)
    {
        return tex;
    }
    catch(char* msg)
    {
    	return 0xf140;
    }
    return 10000.0;
}


int main() {
    double x_val = 5, y_val = 10, z_val= 15;
    

    double result = complexEquation(x_val, y_val, z_val) ;
    
    // cout << "key to your lock is : H&SCTF{" << result << "}" << endl;
    printf("key to your lock is: H&SCTF{%.4f}",result);
    
    return 0;
}
