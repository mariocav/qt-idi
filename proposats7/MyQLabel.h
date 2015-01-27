#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:
        int estat;

	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void canvia();
};
