#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:
        QString text2;
        int n;
	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void doTruncate(int n);
        void getText(QString str);
};
