#include <QWidget>

class MyQWidget : public QWidget
{
	Q_OBJECT

    private:
        int red,green,blue;
	public:
		MyQWidget(QWidget *parent = 0);
        ~MyQWidget();

    public slots:
        void updateColor();
        void getGreen(int g);
        void getRed(int r);
        void getBlue(int b);
};
