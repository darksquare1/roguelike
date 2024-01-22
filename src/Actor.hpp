class Actor {
public :
    int x,y; // position on map
    int ch; // ascii code
    TCODColor col; // color
    const char *name; // the actor's name
    bool blocks; // can we walk on this actor?
    Attacker *attacker; // something that deals damages
    Destructible *destructible; // something that can be damaged
    Ai *ai; // something self-updating

    Actor(int x, int y, int ch, const char *name, const TCODColor &col);
    void update();
    void render() const;
};