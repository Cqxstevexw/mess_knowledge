from multiprocessing import Process
import training

class abc(Process):
    def __init__(self):
        Process.__init__(self)


    def run(self):
        training.train_crack_captcha_cnn()





if __name__ == "__main__":
    for i in range(1, 2):
        a = abc()
        a.start()
        
