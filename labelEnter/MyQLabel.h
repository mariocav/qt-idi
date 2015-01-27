#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:
        QString text2;
        int n;
        void doTruncate(int n);

	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void showText();
        void getText(QString str);
};
