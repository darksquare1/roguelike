class Attacker : public Persistent {
public :
    float power; // hit points given

    explicit Attacker(float power);
    void attack(Actor *owner, Actor *target);
    void load(TCODZip &zip) override;
    void save(TCODZip &zip) override;
};
