#include <QLabel>

class MyQLabel : public QLabel
{
    Q_OBJECT

    public:
        MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    private:

    public slots:
        void pintaVerd(bool b);
};
