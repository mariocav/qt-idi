#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:
        int suma;
        void sumaN(int n);

	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void suma1();
        void suma2();
        void setZero();
};
