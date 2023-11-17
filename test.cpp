#include <iostream>
using namespace std;

struct Inventory{
    string item = "Default sword";
};

struct Player{
    private:
    string Name = "NA";
    Inventory inventory1;

    public:
    Player(string n): Name(n){};
    Inventory getInventory(){
        return inventory1;
    }
};

struct Game{
    Player p1{playerName};
    string playerName;  

    Game(string n): playerName(n){};
    Game(): playerName("NA"){};
    Player getPlayer(){
        return p1;
    }

};


int main(){

    Game GTA{};
    
    cout << GTA.getPlayer().getInventory().item << endl;
    cout << GTA.playerName;

    return 0;
}