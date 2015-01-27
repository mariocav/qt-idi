#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:

	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void setCreu();
        void setCercle();
};
