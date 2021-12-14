#ifndef PARSER_H
#define PARSER_H

#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QCoreApplication>
#include <QMessageBox>
#include <QDebug>
#include "shapes.h"
#include "Vector.h"

/*
  Author: Cameron Wolff
*/

//! Parser Class
/*!
 * \brief The Parser class takes a text file, located in the QTPROJECT folder and containing
 * shapes vector data, and maps it onto the main shapes vector
 */
class Parser
{
public:  // public member functions
    //! static method vector
    /*!
     * \brief parse takes a file, processes data and returns it as a vector
     * \param filename - file to be parsed through
     * \return vector containing data from file represented as shape object
     */
    static myStd::vector<Shape*> parse(QString filename = "shapes.txt");
private:  // private helper functions
    //! private static method get Brush Style
    /*!
     * \brief converts brush style qstring to enum equivalent
     * \param style - qstring to convert
     * \return qstring's style enum equivalent
     */
    static Qt::BrushStyle getBrushStyle(QString style);

    //! private static method get Pen Cap Style
    /*!
     * \brief converts pen cap style qstring to enum equivalent
     * \param style - qstring to convert
     * \return qstring's style enum equivalent
     */
    static Qt::PenCapStyle getPenCapStyle(QString style);

    //! private static method get pen Style
    /*!
     * \brief converts pen style qstring to enum equivalent
     * \param style - qstring to convert
     * \return qstring's style enum equivalent
     */
    static Qt::PenStyle getPenStyle(QString style);

    //! private static method get Pen Joint Style
    /*!
     * \brief converts pen joint style style qstring to enum equivalent
     * \param style - qstring to convert
     * \return qstring's style enum equivalent
     */
    static Qt::PenJoinStyle getPenJoinStyle(QString style);

    //! private static method get Alignment
    /*!
     * \brief converts alignment qstring to enum equivalent
     * \param style - qstring to convert
     * \return qstring's style enum equivalent
     */
    static int getAlignment(QString alignment);

    //! private static method make Font
    /*!
     * \brief makeFont combines parameters into a single QFont object
     * \param fontFamily - family of font
     * \param pointSize - size of font
     * \param fontWeight - weight of font
     * \param fontStyle - style of font
     * \return QFont object with properties of parameters
     */
    static QFont makeFont(QString fontFamily, int pointSize, QString fontWeight, QString fontStyle);

    //! pure virtual function to make class abstract
    virtual void abstract() = 0;
};

#endif // PARSER_H_H
