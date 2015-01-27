#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:
        int graus;
        int groc;
        int vermell;
        int increment;
        void updateColor();

	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void resta();
        void suma();
        void setIncrement(int i);
        void setVermell(int v);
        void setGroc(int g);

    signals:
        void setGraus(int n);
};
