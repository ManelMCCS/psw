class Hand
{
private:
    int value;
    int cardsNumber;
    Card *cardList;
public:
    hand(/* args */);
    ~hand();
    int getScore();
    bool resolveScore();
    void updateCards();
};

hand::hand(/* args */)
{
}

hand::~hand()
{
}
