class CBox {
public: //protected // ���� �ٲ��ִ� �Լ��� ����
	double width;
};

class ChildBox : public CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};