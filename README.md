# Snake Game

## Descrierea Proiectului
Acesta este un joc simplu de tip Snake, implementat în C++. 

## Regulile Jocului
1. Jucătorul controlează un șarpe care se mișcă pe un tablou.
2. Scopul este de a mânca mere (reprezentate prin puncte) pentru a crește lungimea șarpelui.
3. Jucătorul pierde dacă șarpele se lovește de pereți sau de el însuși.

## Structuri de Date
- `Point`: Reprezintă coordonatele pe tabloul de joc.
- `Apple`: Reprezintă mărul pe care șarpele trebuie să-l mănânce.
- `Direction`: Enumeră direcțiile posibile în care se poate mișca șarpele.
- `Board`: Reprezintă tabloul de joc.
- `Snake`: Reprezintă șarpele și logica sa de mișcare.
- `GameEngine`: Controlul jocului și interacțiunea între obiecte.
- `Painter`: Responsabil pentru desenarea pe tabloul de joc (nu este implementat complet).

## Metoda de Construire
1. Asigurați-vă că aveți instalat `g++`.
2. Rulați `make` în directorul proiectului pentru a compila jocul.
3. Executați `Snake.exe` pentru a începe jocul.
