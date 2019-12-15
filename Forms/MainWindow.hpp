/*
 * This file is part of PokéFinder
 * Copyright (C) 2017-2019 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QActionGroup>
#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class Eggs3;
class GameCube;
class IDs3;
class Stationary3;
class Wild3;
class Eggs4;
class IDs4;
class Stationary4;
class Wild4;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QActionGroup *langGroup {};
    QActionGroup *styleGroup {};
    QString currentLanguage;
    QString currentStyle;

    Stationary3 *stationary3 {};
    Wild3 *wild3 {};
    GameCube *gamecube {};
    Eggs3 *egg3 {};
    IDs3 *ids3 {};
    Stationary4 *stationary4 {};
    Wild4 *wild4 {};
    Eggs4 *egg4 {};
    IDs4 *ids4 {};

    void setupModels();
    void checkUpdates();

private slots:
    void slotLanguageChanged(QAction *action);
    void slotStyleChanged(QAction *action);
    void updateProfiles(int num);
    void openStationary3();
    void openWild3();
    void openGameCube();
    void openEgg3();
    void openIDs3();
    void openGameCubeRTC();
    void openGameCubeSeedFinder();
    void openIVtoPID3();
    void openJirachiPattern();
    void openPIDtoIV();
    void openPokeSpot();
    void openSeedtoTime3();
    void openSpindaPainter();
    void openStationary4();
    void openWild4();
    void openEgg4();
    void openIDs4();
    void openIVtoPID4();
    void openSeedtoTime4();
    void openSIDFromChainedShiny();
    void openEncounterLookup();
    void openIVCalculator();
    void openResearcher();
};

#endif // MAINWINDOW_HPP
