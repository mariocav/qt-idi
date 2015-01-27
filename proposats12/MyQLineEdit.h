#include <QLineEdit>
#include <QKeyEvent>

class MyQLineEdit : public QLineEdit
{
    Q_OBJECT

    private:

    public:
        MyQLineEdit(QWidget *parent = 0);
        ~MyQLineEdit();

    private:
        void keyPressEvent(QKeyEvent * e);

    signals:
        void activa(bool b);
};
