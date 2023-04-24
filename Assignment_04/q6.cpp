#include <iostream>
using namespace std;

bool addElement(int set[], int &noe, int capacity, int element)
{
    if (noe == capacity)
    {
        return false;
    }
    else
    {
        set[noe] = element;
        noe++;
        return true;
    }
}

bool removeElement(int set[], int &noe, int capacity, int element)
{
    if (noe == 0)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < noe; i++)
        {
            if (set[i] == element)
            {
                for (int j = i; j < noe - 1; j++)
                {
                    set[j] = set[j + 1];
                }

                noe--;
                return true;
            }
        }

        return false;
    }
}

bool searchElement(int set[], int noe, int element)
{
    for (int i = 0; i < noe; i++)
    {
        if (set[i] == element)
        {
            return true;
        }
    }

    return false;
}

int searchElementPosition(int set[], int noe, int element)
{
    for (int i = 0; i < noe; i++)
    {
        if (set[i] == element)
        {
            return i;
        }
    }

    return -1;
}

bool isEmpty(int setNoe)
{
    if (setNoe == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(int setNoe, int setCapacity)
{
    if (setNoe == setCapacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void displaySet(int set[], int setNoe)
{
    for (int i = 0; i < setNoe; i++)
    {
        cout << set[i] << " ";
    }

    cout << endl;
}

void intersection(int setA[], int setB[], int setANoe, int setBNOE, int setC[], int &setCNOE, int setCCapacity)
{
    for (int i = 0; i < setANoe; i++)
    {
        if (searchElement(setB, setBNOE, setA[i]))
        {
            addElement(setC, setCNOE, setCCapacity, setA[i]);
        }
    }
}

void Union(int setA[], int setB[], int setANOE, int setBNOE, int setC[], int &setCNOE, int setCCapacity)
{
    for (int i = 0; i < setANOE; i++)
    {
        addElement(setC, setCNOE, setCCapacity, setA[i]);
    }

    for (int i = 0; i < setBNOE; i++)
    {
        if (!searchElement(setC, setCNOE, setB[i]))
        {
            addElement(setC, setCNOE, setCCapacity, setB[i]);
        }
    }
}

void difference(int setA[], int setB[], int setANOE, int setBNOE, int setC[], int &setCNOE, int setCCapacity)
{
    for (int i = 0; i < setANOE; i++)
    {
        if (!searchElement(setB, setBNOE, setA[i]))
        {
            addElement(setC, setCNOE, setCCapacity, setA[i]);
        }
    }
}

bool isSubset(int setA[], int setB[], int setANOE, int setBNOE)
{
    for (int i = 0; i < setBNOE; i++)
    {
        if (!searchElement(setA, setANOE, setB[i]))
        {
            return false;
        }
    }

    if (setANOE < setBNOE)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void displayCrossProduct(int setA[], int setB[], int setANOE, int setBNOE)
{
    for (int i = 0; i < setANOE; i++)
    {
        for (int j = 0; j < setBNOE; j++)
        {
            cout << "(" << setA[i] << ", " << setB[j] << ")"
                 << " ";
        }

        cout << endl;
    }
}

void displayPowerSet(int set[], int setNoe)
{
    for (int i = 0; i < (1 << setNoe); i++)
    {
        for (int j = 0; j < setNoe; j++)
        {
            if ((i & (1 << j)))
            {
                cout << set[j] << " ";
            }
        }

        cout << endl;
    }
}

void createClone(int sourceSet[], int sourceNoe, int sourceCapacity, int targetSet[], int &targetNoe, int &targetCapacity)
{
    for (int i = 0; i < sourceNoe; i++)
    {
        addElement(targetSet, targetNoe, targetCapacity, sourceSet[i]);
    }
}

int main()
{
    const int setACapacity = 10;
    int setANOE = 0;
    int setA[setACapacity];
    const int setBCapacity = 7;
    int setBNOE = 0;
    int setB[setBCapacity];
    addElement(setA, setANOE, setACapacity, 5);
    addElement(setA, setANOE, setACapacity, 15);
    addElement(setA, setANOE, setACapacity, 9);
    addElement(setA, setANOE, setACapacity, 10);
    cout << "Set A Elements: ";
    displaySet(setA, setANOE);
    addElement(setB, setBNOE, setACapacity, 9);
    addElement(setB, setBNOE, setACapacity, 17);
    addElement(setB, setBNOE, setACapacity, 95);
    cout << "Set B Elements: ";
    displaySet(setB, setBNOE);
    const int setCCapacity = 20;
    int setCNOE = 0;
    int setC[setCCapacity];
    intersection(setA, setB, setANOE, setBNOE, setC, setCNOE, setCCapacity);
    cout << "Set C Elements: ";
    displaySet(setC, setCNOE);
    cout << "nPower Set of B: ";
    displayPowerSet(setB, setBNOE);

    return 0;
}