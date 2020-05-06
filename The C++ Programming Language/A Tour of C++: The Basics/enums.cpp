#include <iostream>

using namespace std;

enum class TraficLight {green, yellow, red};

TraficLight& operator++(TraficLight& t) {
    switch(t) {
        case TraficLight::green:
            return t = TraficLight::yellow;
        case TraficLight::yellow:
            return t = TraficLight::red;
        case TraficLight::red:
            return t = TraficLight::green;
    }
};


int main() {
    TraficLight semaphor = TraficLight::red;
    ++semaphor;
}
