class CBox {
public: //protected // 값을 바꿔주는 함수를 선언
	double width;
};

class ChildBox : public CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};