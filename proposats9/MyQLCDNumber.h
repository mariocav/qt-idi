#include <QLCDNumber>

class MyQLCDNumber : public QLCDNumber
{
	Q_OBJECT

    private:
        int valorActual;
        int valorAntic;
        int valorSlider;

	public:
		MyQLCDNumber(QWidget *parent = 0);
        ~MyQLCDNumber();

    public slots:
        void setValor(int n);
        void suma();
        void resta();
        void undo();
        void setToZero();
};
