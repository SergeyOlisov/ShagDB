/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTeachers
{
public:
    QLabel *label_pageTeachers;
    QTextEdit *textSearch;
    QPushButton *buttonSearch;
    QLineEdit *lineEdit;
    QPushButton *buttonBack;
    QPushButton *buttonAdd;
    QLabel *label_avatar;
    QPushButton *buttonEdit;
    QDialogButtonBox *buttonBoxSubmitCancel;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lab_Lastname;
    QLabel *lab_Firstname;
    QLabel *lab_Patronymic;
    QLabel *lab_Age;
    QLabel *lab_Sex;
    QLabel *lab_Phone;
    QLabel *lab_Email;
    QLabel *lab_Discipline;
    QLabel *lab_Salary;
    QLabel *lab_Status;
    QLineEdit *line_Lastname;
    QLineEdit *line_Firstname;
    QLineEdit *line_Patronymic;
    QLineEdit *line_Age;
    QLineEdit *line_Sex;
    QLineEdit *line_Phone;
    QLineEdit *line_Email;
    QLineEdit *line_Discipline;
    QLineEdit *line_Salary;
    QLineEdit *line_Status;

    void setupUi(QDialog *DialogTeachers)
    {
        if (DialogTeachers->objectName().isEmpty())
            DialogTeachers->setObjectName(QString::fromUtf8("DialogTeachers"));
        DialogTeachers->resize(1280, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("DesignImages/fon_end1.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogTeachers->setWindowIcon(icon);
        label_pageTeachers = new QLabel(DialogTeachers);
        label_pageTeachers->setObjectName(QString::fromUtf8("label_pageTeachers"));
        label_pageTeachers->setGeometry(QRect(0, 0, 1280, 800));
        label_pageTeachers->setFrameShape(QFrame::StyledPanel);
        label_pageTeachers->setPixmap(QPixmap(QString::fromUtf8("DesignImages/fon_end.png")));
        textSearch = new QTextEdit(DialogTeachers);
        textSearch->setObjectName(QString::fromUtf8("textSearch"));
        textSearch->setGeometry(QRect(20, 290, 521, 31));
        textSearch->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textSearch->setMouseTracking(false);
        textSearch->setTabletTracking(false);
        textSearch->setFocusPolicy(Qt::NoFocus);
        textSearch->setContextMenuPolicy(Qt::NoContextMenu);
        textSearch->setAutoFillBackground(false);
        textSearch->setAcceptRichText(false);
        buttonSearch = new QPushButton(DialogTeachers);
        buttonSearch->setObjectName(QString::fromUtf8("buttonSearch"));
        buttonSearch->setGeometry(QRect(540, 290, 80, 31));
        lineEdit = new QLineEdit(DialogTeachers);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 0, 551, 111));
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        buttonBack = new QPushButton(DialogTeachers);
        buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
        buttonBack->setGeometry(QRect(14, 2, 281, 271));
        buttonBack->setFlat(true);
        buttonAdd = new QPushButton(DialogTeachers);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setGeometry(QRect(620, 330, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("DesignImages/Add_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAdd->setIcon(icon1);
        buttonAdd->setIconSize(QSize(31, 31));
        label_avatar = new QLabel(DialogTeachers);
        label_avatar->setObjectName(QString::fromUtf8("label_avatar"));
        label_avatar->setGeometry(QRect(870, 60, 227, 242));
        label_avatar->setPixmap(QPixmap(QString::fromUtf8("DesignImages/Photo.png")));
        buttonEdit = new QPushButton(DialogTeachers);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));
        buttonEdit->setGeometry(QRect(974, 732, 101, 31));
        buttonBoxSubmitCancel = new QDialogButtonBox(DialogTeachers);
        buttonBoxSubmitCancel->setObjectName(QString::fromUtf8("buttonBoxSubmitCancel"));
        buttonBoxSubmitCancel->setEnabled(false);
        buttonBoxSubmitCancel->setGeometry(QRect(920, 700, 156, 23));
        buttonBoxSubmitCancel->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Save);
        tableView = new QTableView(DialogTeachers);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 330, 600, 450));
        formLayoutWidget = new QWidget(DialogTeachers);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(750, 330, 471, 286));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lab_Lastname = new QLabel(formLayoutWidget);
        lab_Lastname->setObjectName(QString::fromUtf8("lab_Lastname"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lab_Lastname->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, lab_Lastname);

        lab_Firstname = new QLabel(formLayoutWidget);
        lab_Firstname->setObjectName(QString::fromUtf8("lab_Firstname"));
        lab_Firstname->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, lab_Firstname);

        lab_Patronymic = new QLabel(formLayoutWidget);
        lab_Patronymic->setObjectName(QString::fromUtf8("lab_Patronymic"));
        lab_Patronymic->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, lab_Patronymic);

        lab_Age = new QLabel(formLayoutWidget);
        lab_Age->setObjectName(QString::fromUtf8("lab_Age"));
        lab_Age->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, lab_Age);

        lab_Sex = new QLabel(formLayoutWidget);
        lab_Sex->setObjectName(QString::fromUtf8("lab_Sex"));
        lab_Sex->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, lab_Sex);

        lab_Phone = new QLabel(formLayoutWidget);
        lab_Phone->setObjectName(QString::fromUtf8("lab_Phone"));
        lab_Phone->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, lab_Phone);

        lab_Email = new QLabel(formLayoutWidget);
        lab_Email->setObjectName(QString::fromUtf8("lab_Email"));
        lab_Email->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, lab_Email);

        lab_Discipline = new QLabel(formLayoutWidget);
        lab_Discipline->setObjectName(QString::fromUtf8("lab_Discipline"));
        lab_Discipline->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, lab_Discipline);

        lab_Salary = new QLabel(formLayoutWidget);
        lab_Salary->setObjectName(QString::fromUtf8("lab_Salary"));
        lab_Salary->setFont(font1);

        formLayout->setWidget(8, QFormLayout::LabelRole, lab_Salary);

        lab_Status = new QLabel(formLayoutWidget);
        lab_Status->setObjectName(QString::fromUtf8("lab_Status"));
        lab_Status->setFont(font1);

        formLayout->setWidget(9, QFormLayout::LabelRole, lab_Status);

        line_Lastname = new QLineEdit(formLayoutWidget);
        line_Lastname->setObjectName(QString::fromUtf8("line_Lastname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_Lastname);

        line_Firstname = new QLineEdit(formLayoutWidget);
        line_Firstname->setObjectName(QString::fromUtf8("line_Firstname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_Firstname);

        line_Patronymic = new QLineEdit(formLayoutWidget);
        line_Patronymic->setObjectName(QString::fromUtf8("line_Patronymic"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_Patronymic);

        line_Age = new QLineEdit(formLayoutWidget);
        line_Age->setObjectName(QString::fromUtf8("line_Age"));

        formLayout->setWidget(3, QFormLayout::FieldRole, line_Age);

        line_Sex = new QLineEdit(formLayoutWidget);
        line_Sex->setObjectName(QString::fromUtf8("line_Sex"));

        formLayout->setWidget(4, QFormLayout::FieldRole, line_Sex);

        line_Phone = new QLineEdit(formLayoutWidget);
        line_Phone->setObjectName(QString::fromUtf8("line_Phone"));

        formLayout->setWidget(5, QFormLayout::FieldRole, line_Phone);

        line_Email = new QLineEdit(formLayoutWidget);
        line_Email->setObjectName(QString::fromUtf8("line_Email"));

        formLayout->setWidget(6, QFormLayout::FieldRole, line_Email);

        line_Discipline = new QLineEdit(formLayoutWidget);
        line_Discipline->setObjectName(QString::fromUtf8("line_Discipline"));

        formLayout->setWidget(7, QFormLayout::FieldRole, line_Discipline);

        line_Salary = new QLineEdit(formLayoutWidget);
        line_Salary->setObjectName(QString::fromUtf8("line_Salary"));

        formLayout->setWidget(8, QFormLayout::FieldRole, line_Salary);

        line_Status = new QLineEdit(formLayoutWidget);
        line_Status->setObjectName(QString::fromUtf8("line_Status"));

        formLayout->setWidget(9, QFormLayout::FieldRole, line_Status);


        retranslateUi(DialogTeachers);

        QMetaObject::connectSlotsByName(DialogTeachers);
    } // setupUi

    void retranslateUi(QDialog *DialogTeachers)
    {
        DialogTeachers->setWindowTitle(QApplication::translate("DialogTeachers", "Dialog", nullptr));
        label_pageTeachers->setText(QString());
        buttonSearch->setText(QApplication::translate("DialogTeachers", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        lineEdit->setText(QApplication::translate("DialogTeachers", " \320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        buttonBack->setText(QString());
        buttonAdd->setText(QString());
        label_avatar->setText(QString());
        buttonEdit->setText(QApplication::translate("DialogTeachers", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        lab_Lastname->setText(QApplication::translate("DialogTeachers", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        lab_Firstname->setText(QApplication::translate("DialogTeachers", "\320\230\320\274\321\217", nullptr));
        lab_Patronymic->setText(QApplication::translate("DialogTeachers", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        lab_Age->setText(QApplication::translate("DialogTeachers", "\320\224\320\260\321\202\320\260 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        lab_Sex->setText(QApplication::translate("DialogTeachers", "\320\237\320\276\320\273", nullptr));
        lab_Phone->setText(QApplication::translate("DialogTeachers", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        lab_Email->setText(QApplication::translate("DialogTeachers", "E-mail", nullptr));
        lab_Discipline->setText(QApplication::translate("DialogTeachers", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        lab_Salary->setText(QApplication::translate("DialogTeachers", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        lab_Status->setText(QApplication::translate("DialogTeachers", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTeachers: public Ui_DialogTeachers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
