class Building {
    private:
        int price;
        int rent;
        int units;
        int expenses;
        int income;
        int net;
    public:
        Building(int buildingPrice, int averageRent, int numberOfUnits);
        int getDownPayment();
        int getExpenses();
        int getRents();
        int getProfit();
        double calcMortgage();
};