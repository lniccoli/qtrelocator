#include <windows.h>
#include <qtpatchoperation.h>
#include <QStringList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Q_UNUSED(app)
    QStringList args = QCoreApplication::arguments();
    args[0] = "windows";
    if (args.size() ==  2) {
        args.append(""); // empty third argument for qt4; pass qt5 as needed.
    }

    QInstaller::QtPatchOperation op;
    op.setArguments(args);
    if (op.performOperation()) {
        qDebug() << "Operation completed";
        return 0;
    } else {
        qWarning() << "Operation failed";
        return op.error();
    }
};
