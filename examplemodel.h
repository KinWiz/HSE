#ifndef EXAMPLEMODEL_H
#define EXAMPLEMODEL_H

#include <QAbstractTableModel>

class exampleModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit exampleModel(QObject *parent = nullptr);
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index,
                  int role = Qt::DisplayRole) const override;
    bool setData(const QModelIndex &index, const QVariant &value,
                 int role = Qt::EditRole) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    void fillDataTableFromFile(QString path);
    void saveDataToFile(QString path);
    void appendRow(const QList<QVariant> &row);
    void removeRow(int row);

private:
    QList<QList<QVariant>> dataTable;
    QList<QString> headerList;
};
#endif