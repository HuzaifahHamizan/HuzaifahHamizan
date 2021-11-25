#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
    public:
        Player();
        Player (string s, string f);
        virtual ~Player();

        string Getforename() { return forename; }
        void Setforename(string val) { forename = val; }
        string Getsurname() { return surname; }
        void Setsurname(string val) { surname = val; }
        int Getstroke() { return stroke; }
        void Setstroke(int val) { stroke = val; }

    protected:

    private:
        string forename;
        string surname;
        int stroke;
};

#endif // PLAYER_H
