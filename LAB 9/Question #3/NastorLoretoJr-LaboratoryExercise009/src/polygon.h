#include <string>
#include <sstream>

using namespace std;

class Polygon {
    private:
        string mName, mColor;
        int mSides;
    public:
        Polygon (string name, int sides, string color) {
            mName = name;
            mSides = sides;
            mColor = color;
    }
    string getPolygon() {
        ostringstream s;
        s << mName << ". It has " << mSides << " sides and its color is " << mColor << ".";
        return s.str();
    }
};