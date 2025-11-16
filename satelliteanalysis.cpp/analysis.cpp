#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Vec3 {
    double x;
    double y;
    double z;
};

// Relative position vector
Vec3 diff(const Vec3 S1, const Vec3 S2) {
    Vec3 result; 
    result.x = S1.x - S2.x;
    result.y = S1.y - S2.y;
    result.z = S1.z - S2.z;
    return result;
}

// Norm of vectors
double norm_of_vector(Vec3 S1, Vec3 S2) {   
    Vec3 d = diff(S1, S2);
    return sqrt(pow(d.x, 2) + pow(d.y, 2) + pow(d.z, 2));
}

// Relative vectors
Vec3 relative_vectors(const Vec3 S1, const Vec3 S2, const Vec3 V1, const Vec3 V2) {
    Vec3 r12 = diff(S1, S2);
    Vec3 v12 = diff(V1, V2);
}

// Dot product
double dot(const Vec3 a, const Vec3 b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

int main() {
    Vec3 S1 = {7000, 0, 0};
    Vec3 S2 = {7001, 1, 0};
}
