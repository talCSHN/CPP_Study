///*
//	��Ӱ��迡�� �̴ϼȶ����� ���
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
//		std::cout << "�ܿ� ���ָ�: " << getGauge() << std::endl;
//		std::cout << "�ܿ� ���ⷮ: " << getElectricGauge() << std::endl;
//		std::cout << "�ܿ� ���ͷ�: " << waterGauge << std::endl;
//	}
//};
//
//int main()
//{
//	HybridWater hwc(10, 20, 30);
//	hwc.showGauge();
//	return 0;
//}