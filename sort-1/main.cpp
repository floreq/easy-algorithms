#include <iostream>
#include <string.h>

using namespace std;

int t;
const int tSize = 1001;

struct Point
{
    char Name[10];
    int X, Y;
    double SpaceFromCenter;
};

Point *initPoint(const char name[10], int x, int y)
{
    Point *r = new Point();

    strcpy(r->Name, name);
    r->X = x;
    r->Y = y;
    r->SpaceFromCenter = x * x + y * y;

    return r;
}

void coutPointsList(Point *p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i]->Name << " " << p[i]->X << " " << p[i]->Y << endl;
    }
}

int sort(const void *w1, const void *w2)
{

    const Point *a = *(const Point **)w1;
    const Point *b = *(const Point **)w2;

    return a->SpaceFromCenter - b->SpaceFromCenter;
}

int main()
{
    cin >> t;
    do
    {
        t--;

        Point *pointsList[tSize];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char name[11];
            int x, y;
            cin >> name >> x >> y;
            pointsList[i] = initPoint(name, x, y);
        }
        qsort(pointsList, n, sizeof(Point *), sort);
        coutPointsList(pointsList, n);
        for (int i = 0; i < n; i++)
        {
            delete pointsList[i];
        }
    } while (t);
}