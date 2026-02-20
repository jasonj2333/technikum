<?php 

    class Cezar{
        private int $shift;

        public function __construct(int $shift)
        {
            $this->shift = $shift % 26;
        }

        public function encrypt(string $text) : string {
            return $this->process($text, $this->shift);
        }

        public function decrypt(string $text) : string {
            return $this->process($text, -$this->shift);
        }

        private function process(string $text, $shift) : string {
            $result = "";

            for($i = 0; $i < strlen($text); $i++){
                $char = $text[$i];
                if(ctype_lower($char)){
                    $result .= chr((ord($char) - ord('a') + $shift + 26) % 26 + ord('a'));
                }
                elseif(ctype_upper($char)){
                    $result .= chr((ord($char) - ord('A') + $shift + 26) % 26 + ord('A'));
                }
                else{
                    $result .= $char;
                }
            }
            return $result;
        }
    }

    $szyfr = new Cezar(3);
    $tekst = "Informatyka-jest-fajna";
    $szyfrogram = $szyfr->encrypt($tekst);
    echo "<p>Szyfrogram: $szyfrogram</p>";
    $tekstJawny = $szyfr->decrypt($szyfrogram);
    echo "<p>Tekst jawny: $tekstJawny</p>";
?>