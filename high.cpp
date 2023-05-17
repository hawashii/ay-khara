#include "high.h"

high::high()
{
}
void high::highlight(QString k){
QString searchText = k; // The text to highlight
QTextDocument *doc = ui->textEdit_2->document();
QTextCursor cursor = doc->find(searchText);
if (!cursor.isNull()) {
    QTextEdit::ExtraSelection highlight;
    highlight.format.setBackground(Qt::yellow);
    highlight.cursor = cursor;
    QList<QTextEdit::ExtraSelection> extras;
    extras.append(highlight);
    ui->textEdit_2->setExtraSelections(extras);
}
}
