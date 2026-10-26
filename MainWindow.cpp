
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QPushButton>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 连接按钮的点击信号
    connect(ui->pushButton, &QPushButton::clicked,
        this, [this]() {
            QMessageBox::information(
                this,
                QStringLiteral("提示"),
                QStringLiteral("Qt 界面连接成功！")
            );
        });
}

MainWindow::~MainWindow()
{
    delete ui;
}
