/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayoutTail;
    QTextEdit *textEditLogWindow;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutHead;
    QPushButton *pushButtonChocieApkFile;
    QTextEdit *textEditApkFile;
    QTextEdit *textEditSoName;
    QTextEdit *textEditNewFGDirName;
    QTextEdit *textEditNewFGName;
    QPushButton *pushButtonConfirmInject;
    QPushButton *pushButtonCancel;
    QWidget *verticalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditUserInput;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setWindowModality(Qt::ApplicationModal);
        Widget->resize(640, 457);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/getty/Pictures/xx.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setAutoFillBackground(true);
        Widget->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(85, 0, 255);"));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 621, 391));
        horizontalLayoutTail = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayoutTail->setSpacing(0);
        horizontalLayoutTail->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutTail->setObjectName(QString::fromUtf8("horizontalLayoutTail"));
        horizontalLayoutTail->setContentsMargins(0, 0, 0, 0);
        textEditLogWindow = new QTextEdit(verticalLayoutWidget);
        textEditLogWindow->setObjectName(QString::fromUtf8("textEditLogWindow"));
        textEditLogWindow->setMaximumSize(QSize(800, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(85, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        textEditLogWindow->setPalette(palette);
        textEditLogWindow->setMouseTracking(false);
        textEditLogWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEditLogWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        textEditLogWindow->setInputMethodHints(Qt::ImhHiddenText);
        textEditLogWindow->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditLogWindow->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditLogWindow->setAutoFormatting(QTextEdit::AutoAll);
        textEditLogWindow->setLineWrapMode(QTextEdit::NoWrap);
        textEditLogWindow->setReadOnly(true);
        textEditLogWindow->setOverwriteMode(false);
        textEditLogWindow->setAcceptRichText(false);
        textEditLogWindow->setCursorWidth(2);
        textEditLogWindow->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayoutTail->addWidget(textEditLogWindow);

        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 621, 31));
        horizontalLayoutHead = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutHead->setSpacing(6);
        horizontalLayoutHead->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutHead->setObjectName(QString::fromUtf8("horizontalLayoutHead"));
        horizontalLayoutHead->setContentsMargins(0, 0, 0, 0);
        pushButtonChocieApkFile = new QPushButton(horizontalLayoutWidget);
        pushButtonChocieApkFile->setObjectName(QString::fromUtf8("pushButtonChocieApkFile"));
        pushButtonChocieApkFile->setMaximumSize(QSize(25, 23));
        pushButtonChocieApkFile->setStyleSheet(QString::fromUtf8("border:no-border;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/getty/Pictures/file-earmark-fill.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonChocieApkFile->setIcon(icon1);

        horizontalLayoutHead->addWidget(pushButtonChocieApkFile);

        textEditApkFile = new QTextEdit(horizontalLayoutWidget);
        textEditApkFile->setObjectName(QString::fromUtf8("textEditApkFile"));
        textEditApkFile->setMaximumSize(QSize(65535, 23));
        textEditApkFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEditApkFile->setStyleSheet(QString::fromUtf8(""));
        textEditApkFile->setInputMethodHints(Qt::ImhHiddenText);
        textEditApkFile->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditApkFile->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditApkFile->setTabChangesFocus(true);
        textEditApkFile->setLineWrapMode(QTextEdit::NoWrap);
        textEditApkFile->setOverwriteMode(false);
        textEditApkFile->setTabStopWidth(40);
        textEditApkFile->setAcceptRichText(false);

        horizontalLayoutHead->addWidget(textEditApkFile);

        textEditSoName = new QTextEdit(horizontalLayoutWidget);
        textEditSoName->setObjectName(QString::fromUtf8("textEditSoName"));
        textEditSoName->setMaximumSize(QSize(140, 23));
        textEditSoName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditSoName->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditSoName->setUndoRedoEnabled(false);
        textEditSoName->setLineWrapMode(QTextEdit::NoWrap);
        textEditSoName->setAcceptRichText(false);
        textEditSoName->setCursorWidth(1);

        horizontalLayoutHead->addWidget(textEditSoName);

        textEditNewFGDirName = new QTextEdit(horizontalLayoutWidget);
        textEditNewFGDirName->setObjectName(QString::fromUtf8("textEditNewFGDirName"));
        textEditNewFGDirName->setMaximumSize(QSize(140, 23));
        textEditNewFGDirName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditNewFGDirName->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditNewFGDirName->setUndoRedoEnabled(false);
        textEditNewFGDirName->setLineWrapMode(QTextEdit::NoWrap);
        textEditNewFGDirName->setAcceptRichText(false);
        textEditNewFGDirName->setCursorWidth(1);

        horizontalLayoutHead->addWidget(textEditNewFGDirName);

        textEditNewFGName = new QTextEdit(horizontalLayoutWidget);
        textEditNewFGName->setObjectName(QString::fromUtf8("textEditNewFGName"));
        textEditNewFGName->setMaximumSize(QSize(140, 23));
        textEditNewFGName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditNewFGName->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditNewFGName->setUndoRedoEnabled(false);
        textEditNewFGName->setLineWrapMode(QTextEdit::NoWrap);
        textEditNewFGName->setAcceptRichText(false);
        textEditNewFGName->setCursorWidth(1);

        horizontalLayoutHead->addWidget(textEditNewFGName);

        pushButtonConfirmInject = new QPushButton(horizontalLayoutWidget);
        pushButtonConfirmInject->setObjectName(QString::fromUtf8("pushButtonConfirmInject"));
        pushButtonConfirmInject->setMaximumSize(QSize(40, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        QBrush brush7(QColor(0, 120, 215, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        pushButtonConfirmInject->setPalette(palette1);
        pushButtonConfirmInject->setStyleSheet(QString::fromUtf8(":hover{\n"
"	background-color: rgb(0, 170, 0);\n"
"}"));

        horizontalLayoutHead->addWidget(pushButtonConfirmInject);

        pushButtonCancel = new QPushButton(horizontalLayoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMaximumSize(QSize(60, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        pushButtonCancel->setPalette(palette2);
        pushButtonCancel->setStyleSheet(QString::fromUtf8(":hover{\n"
"	background-color: rgb(255, 0, 0);\n"
"}"));

        horizontalLayoutHead->addWidget(pushButtonCancel);

        verticalLayoutWidget_2 = new QWidget(Widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 420, 621, 26));
        horizontalLayout_2 = new QHBoxLayout(verticalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(61, 24));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 167, 166);"));
        label->setIndent(0);

        horizontalLayout_2->addWidget(label);

        lineEditUserInput = new QLineEdit(verticalLayoutWidget_2);
        lineEditUserInput->setObjectName(QString::fromUtf8("lineEditUserInput"));
        lineEditUserInput->setMaximumSize(QSize(900, 24));
        lineEditUserInput->setCursorPosition(0);
        lineEditUserInput->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(lineEditUserInput);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "FRIDA-GADGET\346\263\250\345\205\245\345\231\250", nullptr));
        textEditLogWindow->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEditLogWindow->setPlaceholderText(QString());
        pushButtonChocieApkFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        textEditApkFile->setToolTip(QApplication::translate("Widget", "\345\246\202\346\211\213\345\212\250\345\241\253\345\206\231\345\213\277\345\212\240\345\220\216\347\274\200", nullptr));
#endif // QT_NO_TOOLTIP
        textEditApkFile->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEditApkFile->setPlaceholderText(QApplication::translate("Widget", "\351\200\211\346\213\251\351\234\200\350\246\201\346\263\250\345\205\245FRIDA-GADGET\347\232\204APK", nullptr));
#ifndef QT_NO_TOOLTIP
        textEditSoName->setToolTip(QApplication::translate("Widget", "\344\270\215\351\234\200\350\246\201\346\267\273\345\212\240\345\220\216\347\274\200", nullptr));
#endif // QT_NO_TOOLTIP
        textEditSoName->setPlaceholderText(QApplication::translate("Widget", "\347\233\256\346\240\207SO\346\226\207\344\273\266\345\220\215", nullptr));
#ifndef QT_NO_TOOLTIP
        textEditNewFGDirName->setToolTip(QApplication::translate("Widget", "FRIDA-GADGET\347\233\256\345\275\225\345\220\215", nullptr));
#endif // QT_NO_TOOLTIP
        textEditNewFGDirName->setPlaceholderText(QApplication::translate("Widget", "GADGET\347\233\256\345\275\225\345\220\215", nullptr));
#ifndef QT_NO_TOOLTIP
        textEditNewFGName->setToolTip(QApplication::translate("Widget", "\346\226\260\347\232\204FRIDA-GADGET\347\232\204\346\226\207\344\273\266\345\220\215", nullptr));
#endif // QT_NO_TOOLTIP
        textEditNewFGName->setPlaceholderText(QApplication::translate("Widget", "GADGET\346\226\260\345\220\215\345\255\227", nullptr));
        pushButtonConfirmInject->setText(QApplication::translate("Widget", "\346\263\250\345\205\245", nullptr));
        pushButtonCancel->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\350\277\220\350\241\214", nullptr));
        label->setText(QApplication::translate("Widget", ">", nullptr));
        lineEditUserInput->setPlaceholderText(QApplication::translate("Widget", "\347\202\271\345\207\273\346\263\250\345\205\245\345\220\216\357\274\214\347\224\250\344\272\216\345\221\275\344\273\244\350\276\223\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
