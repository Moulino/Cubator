#ifndef PROGRESSDIALOG_H
#define PROGRESSDIALOG_H

#include <QDialog>

namespace Ui {
class ProgressDialog;
}

class ProgressDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ProgressDialog(QWidget *parent = 0);
    ~ProgressDialog();
    
private:
    Ui::ProgressDialog *ui;

public slots:
    void updateLevel(int level);
    void updateProcessName(QString processName);
};

#endif // PROGRESSDIALOG_H
