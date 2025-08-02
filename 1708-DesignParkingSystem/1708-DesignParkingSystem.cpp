// Last updated: 8/2/2025, 5:10:54 PM
class ParkingSystem {
public:
        vector<int> count;
    ParkingSystem(int big, int medium, int small) {
        count = {big, medium, small};
    }

    bool addCar(int carType) {
        return count[carType - 1]-- > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */