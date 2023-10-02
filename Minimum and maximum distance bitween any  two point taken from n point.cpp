#include<bits/stdc++.h>
using namespace std;

class Point {
public:
    long x;
    long y;

    // Constructor
    Point(long xCoord, long yCoord)
    {
       x = xCoord;
       y = yCoord;

    }

    // Member function to calculate the distance between two points
    double distanceTo(Point other) {
        long x0 = x - other.x;
        long y0 = y - other.y;
        return sqrt(x0 * x0 + y0 * y0);
    }

    // Getters for x and y coordinates
    long getX() const {
        return x;
    }

    long getY() const {
        return y;
    }
};

// Function to find the minimum distance between any two points
double minDist(vector<Point>& points) {
    double MinDis = DBL_MAX;
    int minPoint1Index = -1;
    int minPoint2Index = -1;

    int n = points.size();

    // Iterate over all possible pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double Dis = points[i].distanceTo(points[j]);
            if (MinDis > Dis) {
                MinDis = Dis;
                minPoint1Index = i;
                minPoint2Index = j;
            }
        }
    }

    cout << "Min pair = (" << points[minPoint1Index].getX() << "," << points[minPoint1Index].getY() << ") and (" << points[minPoint2Index].getX() << "," << points[minPoint2Index].getY() << ")" << endl;

    // Return actual minimum distance
    return MinDis;
}

// Function to find the maximum distance between any two points
double maxDist(vector<Point>& points) {
    double MaxDis = 0.0;
    int maxPoint1Index = -1;
    int maxPoint2Index = -1;

    int n = points.size();

    // Iterate over all possible pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double Dis = points[i].distanceTo(points[j]);
            if (MaxDis < Dis) {
                MaxDis = Dis;
                maxPoint1Index = i;
                maxPoint2Index = j;
            }
        }
    }

    cout << "Max pair = (" << points[maxPoint1Index].getX() << "," << points[maxPoint1Index].getY() << ") and (" << points[maxPoint2Index].getX() << "," << points[maxPoint2Index].getY() << ")" << endl;

    // Return actual maximum distance
    return MaxDis;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<Point> points;

    cout << "Enter the points (x y):" << endl;
    for (int i = 0; i < n; i++) {
        long x, y;
        cin >> x >> y;
        points.push_back(Point(x, y));
    }

    double minDistance = minDist(points);
    double maxDistance = maxDist(points);

    cout << fixed << setprecision(2) << "Smallest distance between any two points: " << minDistance << endl;
    cout << fixed << setprecision(2) << "Maximum distance between any two points: " << maxDistance << endl;

    return 0;
}
