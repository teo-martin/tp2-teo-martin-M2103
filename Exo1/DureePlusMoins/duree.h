namespace nsUtil
{
    typedef unsigned long long ULL_t;

    class Duree
    {
    public:
        Duree(ULL_t sec = 0);
        Duree(const Duree & duree);
        void display();
        ULL_t getDuree() const;
        void incr(const ULL_t delta = 0);
        void decr(const ULL_t delta = 0);
        Duree operator + (const Duree & duree);
        Duree operator - (const Duree & duree);
        Duree operator > (const Duree & duree);
        ~Duree(void);

    private:
        ULL_t myDuree;
        unsigned short mySeconds;
        unsigned short myMinutes;
        unsigned short myHours;
        unsigned short myDays;

        void normaliser();
    }; //class Duree
}

