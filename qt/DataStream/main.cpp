#include <QByteArray>
#include <QDataStream>
#include <QFile>

/* Description
 *
 *  Pitfalls with QDataStream and QByteArray
 *
 * Useful Links:
*/

/**
 * @brief dataStreamToQByteArray
 * @return
 */

int
dataStreamToQByteArray()
{
}

/**
 * @brief QByteArrayToDataStream Example how to set a stream to ByteArray
 * @return
 */

int
QByteArrayToDataStream()
{
}

int
main(int argc, char* argv[])
{
  Q_UNUSED(argc);
  Q_UNUSED(argv);
  // OpenFile
  QFile file("dhcp.pcapng");
  if (!file.open(QIODevice::ReadOnly)) {
    printf("Error: Couldn't open file!\r\n");
    return 1;
  }
  // Set DataStream
  QDataStream inStream(&file);

  // Read into Structure

  // Prove endianess
  /*
  QCoreApplication a(argc, argv);
  return a.exec();
  */
}
