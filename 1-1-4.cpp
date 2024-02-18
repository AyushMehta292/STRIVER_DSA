// Switch Statement
#include<bits/stdc++.h>
double areaSwitchCase(int ch,std::vector<double> a) {
    double result;
    switch (ch) {
        case 1: // Circle
            result = M_PI * a[0] * a[0];
            break;
        case 2: // Rectangle
            result = a[0] * a[1];
            break;
        default:
            result = 0;
    }
    return round(result * pow(10, 5)) / pow(10, 5);
}
int main(){
    std::vector<double> a;
    a.push_back(7);
    a.push_back(7);
    double ans;
    ans= areaSwitchCase(2,a);
    std::cout<<ans;
    return 0;

}