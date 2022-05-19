class CBox {
private:
	double width;
};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};