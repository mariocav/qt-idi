#include <QLCDNumber>

class MyQLCDNumber : public QLCDNumber
{
	Q_OBJECT

	public:
		MyQLCDNumber(QWidget *parent = 0);
        ~MyQLCDNumber();

    public slots:
        void display(int num);
        void setToZero();
};
