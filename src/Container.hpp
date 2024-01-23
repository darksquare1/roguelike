class Container : public Persistent {
public :
    int size; // maximum number of actors. 0=unlimited
    TCODList<Actor *> inventory;

    explicit Container(int size);
    ~Container();
    bool add(Actor *actor);
    void remove(Actor *actor);
    void load(TCODZip &zip) override;
    void save(TCODZip &zip) override;
};
