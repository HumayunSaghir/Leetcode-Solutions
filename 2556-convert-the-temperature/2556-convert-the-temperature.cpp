class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double f = celsius * 1.80 + 32;
        vector<double> result;
        result.push_back(kelvin);
        result.push_back(f);
        return result;
    }
};