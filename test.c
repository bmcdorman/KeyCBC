/*
 * KeyCBC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * KeyCBC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with KeyCBC.  If not, see <http://www.gnu.org/licenses/>.
 */

int main(int argc, char* argv)
{
    atexit(closeKeyboard);
    if (openKeyboard() == FALSE)
    {
        printf("Failed to open keyboard!\n");
    }
    char buffer[256];
    printf("You should enter your name: ");
    getString(buffer, 256, TRUE);
    printf("Hello, %s!", buffer);
    return 0;
}
