///*
//	상속관계에서 이니셜라이즈 사용
//*/
//#include <iostream>
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int gauge) : gasolineGauge(gauge) {
//
//	}
//	int getGauge() {
//		return gasolineGauge;
//	}
//};
//
//class HybridCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybridCar(int gauge, int elecGauge) : Car(gauge), electricGauge(elecGauge) {
//
//	}
//	int getElectricGauge() {
//		return electricGauge;
//	}
//};
//
//class HybridWater : public HybridCar {
//	int waterGauge;
//public:
//	HybridWater(int gauge, int elecGauge, int watGauge) : HybridCar(gauge, elecGauge), waterGauge(watGauge) {
//
//	}
//	void showGauge() {
//		std::cout << "잔여 가솔린: " << getGauge() << std::endl;
//		std::cout << "잔여 전기량: " << getElectricGauge() << std::endl;
//		std::cout << "잔여 워터량: " << waterGauge << std::endl;
//	}
//};
//
//int main()
//{
//	HybridWater hwc(10, 20, 30);
//	hwc.showGauge();
//	return 0;
//}