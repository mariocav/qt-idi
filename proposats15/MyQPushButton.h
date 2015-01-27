#include <QPushButton>

class MyQPushButton : public QPushButton
{
	Q_OBJECT

    private:
        unsigned int random;
        unsigned int variable;
        unsigned int rgb[3];

        void toColor();

	public:
		MyQPushButton(QWidget *parent = 0);
        ~MyQPushButton();

    public slots:
        void dial(int n);
        void setRand();
};
